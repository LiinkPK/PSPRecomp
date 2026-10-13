/* Entry 0x089444B0 | file offset 0x00141488 | FUN_089444b0 | bytes 484 */

int FUN_089444b0(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    FUN_08946f90(param_1,param_3,0xffffffff);
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x18);
    if ((param_3 & 0x200) == 0) {
      iVar5 = 0;
      if (*(short *)(iVar3 + 0x1c) == 0) {
LAB_08944670:
        FUN_08946f90(param_1,param_3,0xfffffffe);
        iVar3 = -2;
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x28);
        while (puVar2 = *(uint **)(iVar1 + iVar5 * 4),
              (param_3 & 0x1fc00) >> 10 != (*puVar2 & 0x1fc00) >> 10) {
          iVar5 = iVar5 + 1;
          if ((int)(uint)*(ushort *)(iVar3 + 0x1c) <= iVar5) goto LAB_08944670;
          iVar1 = *(int *)(iVar3 + 0x28);
        }
        iVar3 = 0;
        if (*(short *)((int)puVar2 + 6) == 0) {
LAB_08944644:
          FUN_08946f90(param_1,param_3,0xfffffffd);
          iVar3 = -3;
        }
        else {
          uVar6 = puVar2[2];
          while ((param_3 & 0x1ff) != (**(uint **)(uVar6 + iVar3 * 4) & 0x1ff)) {
            iVar3 = iVar3 + 1;
            if ((int)(uint)*(ushort *)((int)puVar2 + 6) <= iVar3) goto LAB_08944644;
            uVar6 = puVar2[2];
          }
          iVar3 = FUN_08945bec(param_1,param_2,(short)puVar2[1],
                               *(undefined4 *)(puVar2[2] + iVar3 * 4),0);
        }
      }
    }
    else {
      puVar4 = *(ushort **)(iVar3 + 0x40);
      if (puVar4 == (ushort *)0x0) {
        iVar3 = -4;
      }
      else {
        iVar3 = 0;
        if (*puVar4 != 0) {
          do {
            if (**(uint **)(*(int *)(puVar4 + 2) + iVar3 * 4) == param_3) {
              iVar3 = FUN_0894d3f0(param_1,param_2,*(undefined4 *)(*(int *)(puVar4 + 2) + iVar3 * 4)
                                   ,0);
              if (iVar3 != 0) {
                return iVar3;
              }
              return -4;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uint)*puVar4);
        }
        iVar3 = -4;
      }
    }
  }
  return iVar3;
}

