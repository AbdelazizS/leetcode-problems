<?php
// Brute Force Solution
function twoSumBrute($nums, $target) {
    $n = count($nums);
    for ($i = 0; $i < $n; $i++) {
        for ($j = $i + 1; $j < $n; $j++) {
            if ($nums[$i] + $nums[$j] == $target) {
                return [$i, $j];
            }
        }
    }
    return [];
}

// Hash Map Solution
function twoSumHash($nums, $target) {
    $seen = [];
    foreach ($nums as $i => $num) {
        $complement = $target - $num;
        if (isset($seen[$complement])) {
            return [$seen[$complement], $i];
        }
        $seen[$num] = $i;
    }
    return [];
}

// Example usage
$nums = [2, 7, 11, 15];
$target = 9;
$result = twoSumHash($nums, $target);
echo "Indices: " . implode(", ", $result) . "\n";
?>