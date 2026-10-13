/* Entry 0x0884BB48 | file offset 0x00048B20 | FUN_0884bb48 | bytes 564 */

void FUN_0884bb48(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  param_1[3] = param_3;
  if (param_3 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    iVar2 = FUN_08842100(param_3 * 0x140);
    param_1[2] = iVar2;
    param_1[1] = 0;
    while (iVar3 = FUN_08835134(param_2,7,iVar3), iVar3 != 0) {
      param_1[1] = param_1[1] + 1;
    }
    FUN_08935828(param_1[2],0,param_1[3] * 0x140);
    if (param_1[1] == 0) {
      *param_1 = 0;
    }
    else {
      iVar3 = FUN_08842100(param_1[1] * 0xe0);
      *param_1 = iVar3;
      FUN_08935828(iVar3,0,param_1[1] * 0xe0);
      iVar2 = 0;
      iVar3 = 0;
      while (iVar3 = FUN_08835134(param_2,7,iVar3), iVar3 != 0) {
        piVar4 = (int *)(*param_1 + iVar2 * 0xe0);
        uVar1 = *(ushort *)(iVar3 + 6);
        piVar4[5] = (uint)uVar1;
        iVar2 = iVar2 + 1;
        if (**(int **)(param_2 + 0x394) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(**(int **)(param_2 + 0x394) + (uint)uVar1 * 4);
        }
        piVar4[2] = iVar5;
        piVar4[4] = param_2;
        *piVar4 = iVar3;
        FUN_089a3ebc(piVar4 + 0x1c);
        *(undefined1 *)(piVar4 + 0x34) = 0;
        iVar5 = FUN_0884a8e8(DAT_089d4d78,(int)*(short *)(*(int *)(param_2 + 0x2f8) + 2),piVar4[5]);
        if (iVar5 == 0) {
          piVar4[3] = 0;
          iVar6 = piVar4[2];
        }
        else {
          piVar4[2] = (int)((float)piVar4[2] + *(float *)(iVar5 + 0xc));
          iVar6 = piVar4[2];
          piVar4[3] = *(int *)(iVar5 + 8);
        }
        piVar4[1] = iVar6;
      }
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}

