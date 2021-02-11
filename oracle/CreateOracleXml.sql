-- '"' ||
-- ('"' ||) is only necessary for oracle live website since it truncates the result of a media query .-.

SELECT '"' ||
    XMLROOT(
        XMLELEMENT("funcionarios",
            XMLAGG(
                XMLELEMENT("funcionario",
                    XMLELEMENT("nome", EMPLOYEE.FIRST_NAME) AS NOME,
                    XMLELEMENT("telefone", EMPLOYEE.PHONE_NUMBER) AS TELEFONE,
                    XMLELEMENT("cargo", JOB.JOB_TITLE) AS CARGO,
                    XMLELEMENT("departamento", DEPARTMENT.DEPARTMENT_NAME) AS DEPARTAMENTO
                )
            )
        )
    , VERSION 1.0)
    AS FUNCIONARIOS
FROM HR.EMPLOYEES EMPLOYEE
LEFT JOIN HR.DEPARTMENTS DEPARTMENT
    ON EMPLOYEE.DEPARTMENT_ID = DEPARTMENT.DEPARTMENT_ID
INNER JOIN HR.JOBS JOB
    ON EMPLOYEE.JOB_ID = JOB.JOB_ID
WHERE EMPLOYEE.EMPLOYEE_ID BETWEEN 100 AND 105;


SELECT '"' ||
    XMLROOT(
        XMLELEMENT("Departamentos",
            XMLAGG(
                XMLELEMENT("local",
                    XMLELEMENT("departamento", DEPARTMENT.DEPARTMENT_NAME),
                    XMLELEMENT("cidade", LOCATION.CITY),
                    XMLELEMENT("pais", COUNTRY.COUNTRY_NAME)
                )
            )
        )
    , VERSION 1.0)
    AS DEPARTAMENTOS
FROM HR.DEPARTMENTS DEPARTMENT
LEFT JOIN HR.LOCATIONS LOCATION
    ON DEPARTMENT.LOCATION_ID = LOCATION.LOCATION_ID
LEFT JOIN HR.COUNTRIES COUNTRY
    ON LOCATION.COUNTRY_ID = COUNTRY.COUNTRY_ID;
