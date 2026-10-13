/* Entry 0x088994C0 | file offset 0x00096498 | FUN_088994c0 | bytes 176 */

void FUN_088994c0(undefined1 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_110;
  undefined1 local_10c;
  
  FUN_08893cf8(DAT_089d6ac8);
  local_110 = 0x2f70616d;
  local_10c = 0;
  uVar1 = FUN_0889381c(DAT_089d6ac8);
  FUN_08935914(&local_110,uVar1);
  FUN_08935c7c(&local_110,&DAT_089cab10);
  FUN_08935914(&local_110,&DAT_089cab14);
  uVar1 = FUN_08899300();
  iVar2 = FUN_08897460(uVar1,&local_110,param_1);
  if (iVar2 != 0) {
    uVar1 = FUN_08899300();
    FUN_0889a2f0(uVar1,iVar2);
  }
  return;
}

