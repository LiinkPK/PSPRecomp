/* Entry 0x089812F0 | file offset 0x0017E2C8 | FUN_089812f0 | bytes 596 */

void FUN_089812f0(float param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  
  uVar8 = param_4[1];
  uVar6 = 0;
  if (uVar8 != 0) {
    iVar7 = 0;
    do {
      piVar4 = (int *)(*param_4 + iVar7);
      iVar1 = piVar4[3];
      if (iVar1 != 0) {
        uVar2 = *param_5;
        if (piVar4[1] == 1) {
          FUN_08935524(uVar2,iVar1,piVar4[2]);
          uVar8 = param_4[1];
        }
        else {
          piVar3 = (int *)(*param_4 + iVar7);
          fVar10 = param_1;
          if (param_1 < 0.0) {
            fVar10 = -param_1;
          }
          if (fVar10 < 0.0) {
            fVar10 = 0.0;
          }
          else if (100.0 < fVar10) {
            fVar10 = 100.0;
          }
          iVar5 = (int)(((float)*piVar4 * fVar10) / 100.0) + -1;
          if (iVar5 < 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *piVar3;
            if (iVar5 <= *piVar3) {
              iVar9 = iVar5;
            }
          }
          if (param_1 < 0.0) {
            FUN_08981544(param_2,param_3 + 0x10,iVar9,piVar3,uVar2,iVar1,1);
            FUN_08981950(param_2,param_3,iVar9,*param_4 + iVar7,*param_5,
                         *(undefined4 *)(*param_4 + iVar7 + 0xc),1);
            uVar8 = param_4[1];
          }
          else {
            FUN_08981544(param_2,param_3 + 0x10,iVar9,piVar3,uVar2,iVar1,0);
            FUN_08981950(param_2,param_3,iVar9,*param_4 + iVar7,*param_5,
                         *(undefined4 *)(*param_4 + iVar7 + 0xc),0);
            uVar8 = param_4[1];
          }
        }
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x10;
      param_5 = param_5 + 1;
    } while (uVar6 < uVar8);
  }
  return;
}

