/* Entry 0x089424A4 | file offset 0x0013F47C | FUN_089424a4 | bytes 160 */

void FUN_089424a4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 << 2;
  param_1[5] = param_2;
  uVar1 = FUN_089748a4(iVar2);
  *param_1 = uVar1;
  FUN_08935828(uVar1,0,iVar2);
  uVar1 = FUN_089748a4(iVar2);
  param_1[2] = uVar1;
  FUN_08935828(uVar1,0,iVar2);
  uVar1 = FUN_089748a4(iVar2);
  param_1[3] = uVar1;
  FUN_08935828(uVar1,0,iVar2);
  uVar1 = FUN_089748a4(iVar2);
  param_1[4] = uVar1;
  FUN_08935828(uVar1,0,iVar2);
  return;
}

