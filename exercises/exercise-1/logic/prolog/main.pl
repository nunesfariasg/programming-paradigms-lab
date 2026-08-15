% Exercise 01 - Sum of List Elements

sum_numbers([], 0).

sum_numbers([X|Xs], Sum) :-
    sum_numbers(Xs, Rest),
    Sum is X + Rest.
