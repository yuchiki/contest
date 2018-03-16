{-# LANGUAGE ScopedTypeVariables #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE AllowAmbiguousTypes #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE InstanceSigs #-}

import Control.Monad
import Data.List

main :: IO ()
main = do
    s <- getLine
    let unique = nub s
    putStrLn (
        if all (\u -> even . length . filter (== u) $ s) unique
        then "Yes" else "No")