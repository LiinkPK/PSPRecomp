/* Entry 0x089303E4 | file offset 0x0012D3BC | FUN_089303e4 | bytes 152 */

void FUN_089303e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  param_1[0x13] = param_5;
  iVar1 = FUN_088bb88c(param_5);
  if (iVar1 != 0) {
    FUN_08930858(param_1,param_2,param_3,param_4,*(undefined1 *)(iVar1 + 0xf));
    FUN_089309d4(param_1,*(undefined1 *)(iVar1 + 0xc));
    *param_1 = 1;
  }
  return;
}

