/* Entry 0x0895A16C | file offset 0x00157144 | FUN_0895a16c | bytes 528 */

void FUN_0895a16c(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *param_4;
  uVar6 = FUN_089a04c4(1);
  FUN_089a03dc(1);
  FUN_089a03dc(9);
  FUN_089a03dc(2);
  FUN_089a03dc(5);
  bVar1 = *(byte *)(param_3 + 0x18);
  if (bVar1 == 0) {
    FUN_089a12a4(0,6,7,0,0);
  }
  else if (bVar1 < 2) {
    FUN_089a12a4(0,6,10,0,0xffffffff);
  }
  else if (bVar1 < 3) {
    FUN_089a12a4(2,6,10,0,0xffffffff);
  }
  iVar7 = *(int *)(param_2 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                 *(int *)(*(int *)(param_2 + 0x90) + 4) * 2);
  puVar3 = (undefined8 *)(iVar7 + 0x68);
  auVar2 = vmul_q(*(undefined1 (*) [16])(iVar7 + 0x60),
                  *(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40));
  vpfxt(0,0,0,0);
  auVar4._4_8_ = *puVar3;
  auVar4._0_4_ = 0x437f0000;
  auVar4._12_4_ = 0;
  auVar2 = vmax_q(auVar2,auVar4 << 0x20);
  vpfxt(1,1,1,1);
  auVar5._4_8_ = *puVar3;
  auVar5._0_4_ = 0x437f0000;
  auVar5._12_4_ = 0;
  auVar2 = vmin_q(auVar2,auVar5 << 0x20);
  FUN_089a0c8c((int)auVar2._8_4_ << 0x10 | (int)auVar2._12_4_ << 0x18 | (int)auVar2._0_4_ |
               (int)auVar2._4_4_ << 8);
  iVar7 = FUN_08974a3c(*(undefined4 *)(param_2 + 0xb0),0xc);
  if (iVar7 != 0) {
    FUN_08935524(iVar7,*(undefined4 *)(iVar8 + 8),0xc);
    FUN_089a0520(6,0x800100,2,0,iVar7);
    FUN_089a0438(1,uVar6);
  }
  return;
}

