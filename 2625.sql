SELECT
    SUBSTRING(a.cpf, 1, 3)|| '.' || 
    SUBSTRING(a.cpf, 4, 3)|| '.' ||
    SUBSTRING(a.cpf, 7, 3)|| '-' ||
    SUBSTRING(a.cpf, 10) AS cpf FROM natural_person a JOIN customers c ON c.id = a.id_customers