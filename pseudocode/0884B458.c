/* Entry 0x0884B458 | file offset 0x00048430 | FUN_0884b458 | bytes 840 */

void FUN_0884b458(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar3 = 0;
  if ((0 < param_6) && (param_6 < 0x20)) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 < *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 0x14) = iVar1 + 1;
      iVar5 = *(int *)(param_1 + 8) +
              ((*(int *)(param_1 + 0x10) + iVar1) % *(int *)(param_1 + 0xc)) * 0x140;
      FUN_089a3868(iVar5,param_2);
      FUN_089a3868(iVar5 + 0x10,param_3);
      FUN_089a3868(iVar5 + 0x20,param_4);
      *(undefined2 *)(iVar5 + 0x12e) = param_5;
      uVar2 = *(uint *)(iVar5 + 0x130);
      *(uint *)(iVar5 + 0x130) = uVar2 | 0x20000;
      *(undefined4 *)(iVar5 + 0x120) = 0x43b40000;
      *(uint *)(iVar5 + 0x130) = uVar2 & 0xfffeffff | 0x30000;
      *(short *)(iVar5 + 0x130) = (short)param_6;
      uVar2 = *(uint *)(iVar5 + 0x130);
      *(uint *)(iVar5 + 0x130) = uVar2 | 0x80000;
      *(uint *)(iVar5 + 0x130) = uVar2 & 0xfffbffff | 0x80000;
      *(int *)(iVar5 + 0x128) = *(int *)(DAT_089d4d80 + 0x2810) + param_6 * 0x90 + -0x90;
      iVar1 = *(int *)(param_1 + 0x14);
      iVar4 = 0;
      if (0 < iVar1) {
        iVar3 = *(int *)(param_1 + 0x10);
        do {
          iVar3 = *(int *)(param_1 + 8) + ((iVar3 + iVar4) % *(int *)(param_1 + 0xc)) * 0x140;
          if (((*(float *)(iVar3 + 0x120) != 0.0) && (iVar3 != iVar5)) &&
             ((*(uint *)(iVar3 + 0x130) & 0x40000) != 0)) {
            fVar6 = (float)FUN_089a3c18(param_2,iVar3);
            if (fVar6 <= 0.05) {
              *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) & 0xfffeffff;
              *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) & 0xfffeffff;
              iVar1 = *(int *)(param_1 + 0x14);
              break;
            }
            fVar6 = (float)FUN_089a3c18(param_3,iVar3);
            if (fVar6 <= 0.05) {
              *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) & 0xfffdffff;
              *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) & 0xfffeffff;
              iVar1 = *(int *)(param_1 + 0x14);
              break;
            }
            fVar6 = (float)FUN_089a3c18(param_2,iVar3 + 0x10);
            if (fVar6 <= 0.05) {
              *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) & 0xfffeffff;
              *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) & 0xfffdffff;
              iVar1 = *(int *)(param_1 + 0x14);
              break;
            }
            fVar6 = (float)FUN_089a3c18(param_3,iVar3 + 0x10);
            if (fVar6 <= 0.05) {
              *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) & 0xfffdffff;
              *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) & 0xfffdffff;
              iVar1 = *(int *)(param_1 + 0x14);
              break;
            }
          }
          iVar1 = *(int *)(param_1 + 0x14);
          iVar4 = iVar4 + 1;
          if (iVar1 <= iVar4) break;
          iVar3 = *(int *)(param_1 + 0x10);
        } while( true );
      }
      if (iVar4 != iVar1) {
        FUN_0884c5e8(iVar3);
      }
      FUN_0884c5e8(iVar5);
    }
  }
  return;
}

