class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        boxes = {}

        for i in range(9):
            for j in range(9):
                num = board[i][j]

                if num==".":
                    continue
                key = (i//3,j//3)
                if key not in boxes:
                    boxes[key] = set()

                if (num in rows[i] or num in cols[j] or num in boxes[key]):
                    return False
                    
                rows[i].add(num)
                cols[j].add(num)
                boxes[key].add(num)
        return True