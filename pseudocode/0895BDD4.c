/* Entry 0x0895BDD4 | file offset 0x00158DAC | FUN_0895bdd4 | bytes 924 */

void FUN_0895bdd4(int param_1,int param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar7 = FUN_089a04c4(1);
  FUN_089a03dc(1);
  FUN_089a03dc(2);
  FUN_089a03dc(5);
  bVar2 = *(byte *)(param_3 + 0x11);
  if (bVar2 == 0) {
    FUN_089a12a4(0,6,7,0,0);
  }
  else if (bVar2 < 2) {
    FUN_089a12a4(0,6,10,0,0xffffffff);
  }
  else if (bVar2 < 3) {
    FUN_089a12a4(2,6,10,0,0xffffffff);
  }
  FUN_089a0384(9);
  bVar1 = *(char *)(param_3 + 0x14) != '\0';
  iVar8 = *(int *)(param_2 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                 *(int *)(*(int *)(param_2 + 0x90) + 4) * 2);
  puVar4 = (undefined8 *)(iVar8 + 0x68);
  auVar3 = vmul_q(*(undefined1 (*) [16])(iVar8 + 0x60),
                  *(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40));
  vpfxt(0,0,0,0);
  auVar5._4_8_ = *puVar4;
  auVar5._0_4_ = 0x437f0000;
  auVar5._12_4_ = 0;
  auVar3 = vmax_q(auVar3,auVar5 << 0x20);
  vpfxt(1,1,1,1);
  auVar6._4_8_ = *puVar4;
  auVar6._0_4_ = 0x437f0000;
  auVar6._12_4_ = 0;
  auVar3 = vmin_q(auVar3,auVar6 << 0x20);
  FUN_089a0c8c((int)auVar3._8_4_ << 0x10 | (int)auVar3._12_4_ << 0x18 | (int)auVar3._0_4_ |
               (int)auVar3._4_4_ << 8);
  FUN_0896fbf4();
  local_80 = 0x3f800000;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x3f800000;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x3f800000;
  FUN_089a04f4(2,&local_80);
  iVar8 = *(int *)(param_2 + 0xac);
  if (*(char *)(param_3 + 0x12) == '\x01') {
    *(undefined4 *)(iVar8 + 0x40) = 1;
    iVar9 = 0;
    if (*(char *)(param_3 + 0x13) != '\0') {
      do {
        FUN_08973714(iVar8,1);
        FUN_0897371c(iVar8,bVar1,bVar1,1,1);
        FUN_089a0520(4,0x183,10,0,*(undefined4 *)(param_1 + *(int *)(param_1 + 8) * 4));
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)*(byte *)(param_3 + 0x13));
    }
    *(int *)(param_1 + 8) = 1 - *(int *)(param_1 + 8);
  }
  else {
    *(undefined4 *)(iVar8 + 0x40) = 0;
    FUN_08973714(iVar8,0);
    FUN_0897371c(iVar8,bVar1,bVar1,1,1);
    iVar8 = 0;
    if (*(char *)(param_3 + 0x13) != '\0') {
      do {
        FUN_089a0520(4,0x183,10,0,*(undefined4 *)(param_1 + *(int *)(param_1 + 8) * 4));
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)*(byte *)(param_3 + 0x13));
    }
    *(int *)(param_1 + 8) = 1 - *(int *)(param_1 + 8);
  }
  FUN_0896fbc0();
  FUN_089a0438(1,uVar7);
  *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x18) = 0xfffffffe;
  return;
}

