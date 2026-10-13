/* Entry 0x08909ABC | file offset 0x00106A94 | FUN_08909abc | bytes 72 */

bool FUN_08909abc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08903d6c(param_1 + 4);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 400) = 2;
  }
  return iVar1 == 1;
}

