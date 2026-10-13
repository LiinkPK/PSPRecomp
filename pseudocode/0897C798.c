/* Entry 0x0897C798 | file offset 0x00179770 | FUN_0897c798 | bytes 540 */

void FUN_0897c798(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar3 = *(int *)(param_4 + 0xc);
  uVar6 = *(undefined4 *)(DAT_089da27c + 0x3c);
  fVar7 = -*(float *)(DAT_089da27c + 0x30);
  fVar4 = -*(float *)(DAT_089da27c + 0x34);
  fVar5 = -*(float *)(DAT_089da27c + 0x38);
  FUN_089a405c(auStack_100,DAT_089da278);
  FUN_0896fb5c(auStack_100);
  iVar1 = FUN_0897cba8(param_3,param_4);
  if (iVar1 != 0) {
    if (*(char *)(param_3 + 0x35) == '\0') {
      FUN_089c33d8(param_4,iVar3 + 0x40,iVar3,iVar3 + 0x80,iVar3 + 0xc0);
    }
    else {
      local_40 = *(undefined4 *)(param_3 + 0x28);
      iVar1 = *(int *)(param_2 + 0x8c);
      puVar2 = *(undefined1 **)
                (*(int *)(iVar1 + 0x48) +
                (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
      local_3c = local_40;
      local_38 = local_40;
      local_34 = local_40;
      FUN_08946ac4(0x3f800000,param_2,iVar1,*(undefined4 *)(iVar1 + 0x50),*puVar2,puVar2[1],
                   puVar2[2],auStack_80);
      iVar1 = *(int *)(param_2 + 0x8c);
      FUN_08947b88(0x3f800000,param_2,iVar1,*(undefined4 *)(iVar1 + 0x50),
                   *(undefined1 *)
                    (*(int *)(*(int *)(iVar1 + 0x48) +
                             (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4) + 1)
                   ,3,param_3 + 0x10,&local_40,auStack_c0,fVar7,fVar4,fVar5,uVar6);
      uVar6 = FUN_0896fd08(auStack_80,auStack_c0);
      FUN_0896fd88(uVar6);
      FUN_089c33d8(param_4,iVar3 + 0x40,iVar3,iVar3 + 0x80,iVar3 + 0xc0);
      FUN_0896fe50();
    }
  }
  return;
}

