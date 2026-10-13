/* Entry 0x0887A5F8 | file offset 0x000775D0 | FUN_0887a5f8 | bytes 36 */

bool FUN_0887a5f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x28) < 2;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    *(undefined4 *)(param_1 + 0x18) = param_3;
  }
  return bVar1;
}

