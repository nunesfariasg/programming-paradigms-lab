sumNumbers :: [Int] -> Int
sumNumbers [] = 0
sumNumbers (x:xs) = x + sumNumbers xs

main :: IO ()
main = do
    let numbers = [10, 20, 30, 40, 50]

    print (sumNumbers numbers)