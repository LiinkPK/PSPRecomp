/* Entry 0x08833360 | file offset 0x00030338 | FUN_08833360 | bytes 164 */

void FUN_08833360(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while (iVar2 = FUN_08841f64(iVar2), iVar2 != 0) {
    if ((((iVar2 != param_1) && (iVar1 = FUN_08837990(iVar2), iVar1 == 0)) &&
        (iVar1 = FUN_088375d4(iVar2), iVar1 != 0)) && (*(char *)(iVar2 + 0x542) != '\x03')) {
      FUN_0883e904(*(undefined4 *)(param_1 + 0x468),*(undefined4 *)(iVar2 + 0x468),param_2);
    }
  }
  return;
}

