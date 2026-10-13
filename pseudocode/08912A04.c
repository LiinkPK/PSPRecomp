/* Entry 0x08912A04 | file offset 0x0010F9DC | FUN_08912a04 | bytes 104 */

void FUN_08912a04(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0xc;
  FUN_089a34e0(iVar1 + 0x1d8);
  FUN_089a34e0(iVar1 + 0x208);
  *(undefined2 *)(param_1 + param_2 * 2 + 0x238) = 0;
  *(undefined1 *)(param_1 + param_2 + 0x1d4) = 0;
  return;
}

