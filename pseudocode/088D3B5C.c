/* Entry 0x088D3B5C | file offset 0x000D0B34 | FUN_088d3b5c | bytes 44 */

void FUN_088d3b5c(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

