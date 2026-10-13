/* Entry 0x088132BC | file offset 0x00010294 | FUN_088132bc | bytes 20 */

bool FUN_088132bc(int param_1)

{
  return (*(uint *)(*(int *)(param_1 + 0x30) + 8) & 2) != 0;
}

