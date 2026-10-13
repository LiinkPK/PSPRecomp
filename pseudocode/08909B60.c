/* Entry 0x08909B60 | file offset 0x00106B38 | FUN_08909b60 | bytes 76 */

bool FUN_08909b60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08903ec4(param_1 + 4,0);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 400) = 2;
  }
  return iVar1 == 1;
}

