/* Entry 0x089AC628 | file offset 0x001A9600 | FUN_089ac628 | bytes 100 */

int FUN_089ac628(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_089ac68c(*(undefined4 *)(param_1 + 4),1);
    iVar1 = *(int *)(param_1 + 0x24);
    if ((iVar1 + 1U & 0xffff0000) == 0) {
      iVar1 = 0;
    }
    FUN_089ac598(iVar1,1);
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x28));
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0xc));
  }
  return param_1;
}

