/* Entry 0x0884D658 | file offset 0x0004A630 | FUN_0884d658 | bytes 860 */

void FUN_0884d658(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_e4 [52];
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [64];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  if ((0 < param_1[3]) && (local_3c = FUN_08899300(), *param_1 != 0)) {
    iVar6 = 0;
    if (0 < param_1[1]) {
      local_40 = FUN_0884cf64;
      iVar1 = 0;
      do {
        piVar4 = (int *)(*param_1 + iVar1);
        iVar2 = FUN_08837d18(param_2,*(undefined1 *)*piVar4);
        if (iVar2 == 0) {
          FUN_088369a4(param_2,piVar4 + 0x1c,piVar4[5]);
          *(undefined1 *)(piVar4 + 0x34) = 0;
          iVar2 = piVar4[2];
        }
        else {
          local_38 = iVar6;
          if ((char)piVar4[0x34] == '\0') {
            FUN_089a383c(-(float)piVar4[3],0,0,0x3f800000,auStack_a0);
            FUN_089a3f40(piVar4 + 0x2c,piVar4 + 0x1c,auStack_a0);
            FUN_089a383c(piVar4[1],0,0,0x3f800000,auStack_a0);
            FUN_089a3f40(piVar4 + 0x30,piVar4 + 0x1c,auStack_a0);
          }
          local_34 = iVar1;
          FUN_088369a4(param_2,auStack_90,piVar4[5]);
          piVar7 = piVar4 + 0x14;
          FUN_089a383c(-(float)piVar4[3],0,0,0x3f800000,piVar7);
          FUN_089a3f40(piVar7,auStack_90,piVar7);
          piVar5 = piVar4 + 0x18;
          FUN_089a383c(piVar4[1],0,0,0x3f800000,piVar5);
          FUN_089a3f40(piVar5,auStack_90,piVar5);
          piVar4[0x10] = 0;
          iVar6 = *piVar4;
          *(bool *)((int)piVar4 + 0xd1) = *(short *)(param_2 + 0x180) == 2;
          FUN_089a383c(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc),
                       *(undefined4 *)(iVar6 + 0x10),0x3f800000,auStack_a0);
          FUN_089a3f40(&local_b0,auStack_90,auStack_a0);
          local_ac = local_ac - *(float *)(*piVar4 + 0x14);
          local_44 = *(undefined4 *)(*piVar4 + 0x18);
          local_50 = local_b0;
          local_48 = local_a8;
          local_4c = local_ac;
          FUN_088978c4(local_3c,auStack_e4,&local_50,6,1,local_40,piVar4,0,0);
          FUN_089a3868(piVar4 + 0x2c,piVar7);
          FUN_089a3868(piVar4 + 0x30,piVar5);
          *(undefined1 *)(piVar4 + 0x34) = 1;
          iVar2 = piVar4[2];
          iVar1 = local_34;
          iVar6 = local_38;
        }
        piVar4[1] = iVar2;
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + 0xe0;
      } while (iVar6 < param_1[1]);
    }
    iVar6 = 0;
    iVar1 = param_1[4];
    if (0 < param_1[5]) {
      do {
        iVar2 = param_1[2] + iVar1 * 0x140;
        uVar3 = *(uint *)(iVar2 + 0x130);
        if ((uVar3 & 0x80000) == 0) {
          uVar3 = uVar3 & 0xfffbffff;
        }
        else {
          uVar3 = uVar3 | 0x40000;
        }
        *(uint *)(iVar2 + 0x130) = uVar3;
        iVar1 = iVar1 + 1;
        if (param_1[3] <= iVar1) {
          iVar1 = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1[5]);
    }
  }
  return;
}

