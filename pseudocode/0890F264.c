/* Entry 0x0890F264 | file offset 0x0010C23C | FUN_0890f264 | bytes 120 */

void FUN_0890f264(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_089d6d78;
  if (*param_1 != 0) {
    FUN_088a9b18();
    FUN_088a5604(uVar1,*param_1);
    *param_1 = 0;
  }
  iVar2 = 0;
  if (param_1[1] != 0) {
    FUN_088a522c();
    iVar2 = param_1[1];
  }
  FUN_088a51e4(iVar2);
  param_1[1] = 0;
  return;
}

