/* Entry 0x08959AF4 | file offset 0x00156ACC | FUN_08959af4 | bytes 848 */

void FUN_08959af4(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int local_e0;
  int local_dc [3];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined *local_c0 [4];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [72];
  
  piVar5 = &local_e0;
  iVar6 = *(int *)(DAT_09b6f478 + 0xac);
  *(uint *)(iVar6 + 0x40) = (uint)(*(char *)(param_3 + 0x38) != '\0');
  FUN_08973714(iVar6);
  FUN_0897371c(iVar6,1,1,1,1);
  bVar1 = *(byte *)(param_3 + 0x37);
  if (bVar1 == 0) {
    FUN_089a12a4(0,6,7,0,0);
  }
  else if (bVar1 < 2) {
    FUN_089a12a4(0,6,10,0,0xffffffff);
  }
  else if (bVar1 < 3) {
    FUN_089a12a4(2,6,10,0,0xffffffff);
  }
  auVar2 = vmul_q(*(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40),
                  *(undefined1 (*) [16])
                   (*(int *)(param_2 + 0x8c) +
                    (uint)*(ushort *)
                           (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                           *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60));
  local_d0 = auVar2._0_4_;
  local_cc = auVar2._4_4_;
  local_c8 = auVar2._8_4_;
  local_c4 = auVar2._12_4_;
  local_e0 = 0xff;
  local_dc[0] = (int)local_c4 * 2;
  if ((int)local_c4 * 2 < 0xff) {
    piVar5 = local_dc;
  }
  uVar7 = (int)local_d0 | (int)local_cc << 8 | (int)local_c8 << 0x10 | *piVar5 << 0x18;
  FUN_0899ffc8(1);
  FUN_089a0384(10);
  FUN_089a0c20(uVar7);
  FUN_089a0d84(0,1,uVar7);
  if (*(int *)(param_3 + 0xc) < 0) {
    uVar4 = 0;
  }
  else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) +
                      *(int *)(param_3 + 0xc) * 4) + 0x10);
  }
  uVar4 = FUN_08972180(*(undefined4 *)(param_2 + 0xa0),uVar4);
  FUN_0895e798(local_c0,uVar4);
  iVar6 = *(int *)(param_2 + 0x8c);
  piVar5 = (int *)*param_4;
  puVar3 = *(undefined1 **)
            (*(int *)(iVar6 + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
  FUN_08946ac4(0x3f800000,param_2,iVar6,*(undefined4 *)(iVar6 + 0x50),*puVar3,puVar3[1],puVar3[2],
               auStack_b0);
  iVar6 = *(int *)(param_2 + 0x8c);
  puVar3 = *(undefined1 **)
            (*(int *)(iVar6 + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
  FUN_089477b4(0x3f800000,param_2,iVar6,*(undefined4 *)(iVar6 + 0x50),*puVar3,puVar3[1],puVar3[2],
               auStack_70);
  FUN_0896fb5c(auStack_b0);
  iVar6 = *piVar5;
  (**(code **)(iVar6 + 0x2c))((int)piVar5 + (int)*(short *)(iVar6 + 0x28),local_c0,auStack_70);
  local_c0[0] = &DAT_089c5508;
  FUN_0899ffc8(0);
  FUN_089a03dc(10);
  return;
}

