/* Entry 0x08981E4C | file offset 0x0017EE24 | FUN_08981e4c | bytes 548 */

void FUN_08981e4c(float param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  
  uVar4 = 0;
  if (param_4[1] != 0) {
    iVar5 = 0;
    do {
      piVar6 = (int *)(*param_4 + iVar5);
      iVar1 = piVar6[3];
      if (iVar1 == 0) {
        *param_5 = 0;
        uVar2 = param_4[1];
      }
      else {
        piVar3 = (int *)(*param_4 + iVar5);
        fVar8 = param_1;
        if (param_1 < 0.0) {
          fVar8 = -param_1;
        }
        if (fVar8 < 0.0) {
          fVar8 = 0.0;
        }
        else if (100.0 < fVar8) {
          fVar8 = 100.0;
        }
        iVar7 = (int)(((float)*piVar6 * fVar8) / 100.0) + -1;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        else if (*piVar3 < iVar7) {
          iVar7 = *piVar3;
        }
        if (param_1 < 0.0) {
          FUN_08982400(param_2,param_3 + 0x10,iVar7,piVar3,*param_5,iVar1,1);
          FUN_08982c44(param_2,param_3,iVar7,*param_4 + iVar5,*param_5,
                       *(undefined4 *)(*param_4 + iVar5 + 0xc),1);
          uVar2 = param_4[1];
        }
        else {
          FUN_08982400(param_2,param_3 + 0x10,iVar7,piVar3,*param_5,iVar1,0);
          FUN_08982c44(param_2,param_3,iVar7,*param_4 + iVar5,*param_5,
                       *(undefined4 *)(*param_4 + iVar5 + 0xc),0);
          uVar2 = param_4[1];
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
      param_5 = param_5 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

