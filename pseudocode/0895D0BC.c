/* Entry 0x0895D0BC | file offset 0x0015A094 | FUN_0895d0bc | bytes 704 */

void FUN_0895d0bc(undefined4 param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar3 = *(int *)(DAT_09b6f478 + 0xac);
  *(uint *)(iVar3 + 0x40) = (uint)(*(char *)(param_3 + 0x50) != '\0');
  FUN_08973714(iVar3);
  FUN_0897371c(iVar3,1,1,1,1);
  auVar1 = vmul_q(*(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40),
                  *(undefined1 (*) [16])
                   (*(int *)(param_2 + 0x8c) +
                    (uint)*(ushort *)
                           (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                           *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60));
  local_f0 = auVar1._0_4_;
  local_ec = auVar1._4_4_;
  local_e8 = auVar1._8_4_;
  local_e4 = auVar1._12_4_;
  local_d4 = *(float *)(param_3 + 0x40) * 0.0078125 * local_e4;
  local_c4 = *(float *)(param_3 + 0x3c) * 0.0078125 * local_e4;
  iVar3 = *(int *)(param_2 + 0x8c);
  puVar2 = *(undefined1 **)
            (*(int *)(iVar3 + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
  local_e0 = local_f0;
  local_dc = local_ec;
  local_d8 = local_e8;
  local_d0 = local_f0;
  local_cc = local_ec;
  local_c8 = local_e8;
  FUN_08946ac4(0x3f800000,param_2,iVar3,*(undefined4 *)(iVar3 + 0x50),*puVar2,puVar2[1],puVar2[2],
               auStack_c0);
  FUN_0896fb5c(auStack_c0);
  FUN_0895de24(param_1,param_3);
  FUN_089a03dc(5);
  if (*(char *)(param_3 + 0x54) == '\0') {
    FUN_0895dec4(param_1,&local_f0);
    FUN_0895e528(param_1,&local_d0,&local_e0);
  }
  else {
    local_40 = *(undefined4 *)(param_3 + 0x48);
    iVar3 = *(int *)(param_2 + 0x8c);
    local_3c = local_40;
    local_38 = local_40;
    local_34 = local_40;
    FUN_08947b88(0x3f800000,param_2,iVar3,*(undefined4 *)(iVar3 + 0x50),
                 *(undefined1 *)
                  (*(int *)(*(int *)(iVar3 + 0x48) +
                           (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4) + 1),3
                 ,param_3 + 0x30,&local_40,auStack_80);
    uVar4 = FUN_0896fd08(auStack_c0,auStack_80);
    FUN_0896fd88(uVar4);
    FUN_0895dec4(param_1,&local_f0);
    FUN_0895e528(param_1,&local_d0,&local_e0);
    FUN_0896fe50();
  }
  FUN_0895debc(param_1);
  return;
}

