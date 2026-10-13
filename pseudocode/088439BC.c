/* Entry 0x088439BC | file offset 0x00040994 | FUN_088439bc | bytes 196 */

bool FUN_088439bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_08844fa4(*param_1 + 0x24,&DAT_089c88a8);
  iVar2 = FUN_088fe7c8(uVar1,*(char *)(*param_1 + 9) != '\0');
  if (0 < iVar2) {
    FUN_088fe850(uVar1,param_2,param_3,FUN_08843be0,param_1,*(char *)(*param_1 + 9) != '\0');
  }
  else {
    *(undefined1 *)(DAT_089d4960 + 0x61) = 1;
  }
  return 0 < iVar2;
}

