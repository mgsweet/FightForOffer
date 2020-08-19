# Write your MySQL query statement below
SELECT 
    d.Name AS Department,
    e.Name AS Employee,
    Salary
FROM Employee e
JOIN Department d ON e.DepartmentId = d.Id
WHERE (e.DepartmentId, Salary) in (
    SELECT 
        DepartmentId, 
        MAX(Salary)
    FROM Employee
    GROUP BY DepartmentId
)