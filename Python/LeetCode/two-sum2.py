#utilizando dicionário. complexidade O(n)

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash = {}
        tam = len(nums)

        #tabela hash (números são as chaves e i são os valores associados às chaves)
        for i in range(tam):
            hash[nums[i]] = i
        
        #encontrando o complemento
        for i in range(tam):
            complement = target - nums[i]
            if complement in hash and hash[complement] != i:
                return [i, hash[complement]]
        
        return []