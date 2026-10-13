/* Entry 0x08858CB8 | file offset 0x00055C90 | FUN_08858cb8 | bytes 936 */

void FUN_08858cb8(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  float fVar7;
  float local_50;
  float local_4c;
  uint local_38;
  
  if (param_3 < 0) {
    return;
  }
  uVar6 = param_4 & 2;
  local_38 = param_4;
  if (uVar6 == 0) {
    iVar1 = FUN_08866e04(&local_50,param_2 + 0x100);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x334);
    local_50 = local_50 + (float)*(int *)(param_1 + 0x33c);
    local_4c = local_4c + (float)*(int *)(param_1 + 0x340);
  }
  else {
    FUN_08838dcc(param_2,&local_50,*(undefined4 *)(*(int *)(param_2 + 0x394) + 0xfc));
    iVar1 = FUN_08866e04(&local_50,&local_50);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x334);
  }
  if (iVar1 < 10) {
    *(int *)(param_1 + 0x334) = iVar1 + 1;
    iVar2 = param_1 + ((*(int *)(param_1 + 0x330) + iVar1) % 10) * 0x50;
    piVar3 = (int *)(iVar2 + 0x10);
    iVar1 = iVar2 + 0x20;
    puVar5 = (undefined4 *)(iVar2 + 0x48);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x330);
    *(int *)(param_1 + 0x330) = iVar1 + 1;
    iVar2 = param_1 + iVar1 * 0x50;
    piVar3 = (int *)(iVar2 + 0x10);
    iVar1 = iVar2 + 0x20;
    puVar5 = (undefined4 *)(iVar2 + 0x48);
    if (9 < *(int *)(param_1 + 0x330)) {
      *(undefined4 *)(param_1 + 0x330) = 0;
    }
  }
  FUN_089a3868(iVar1,&local_50);
  piVar3[8] = 0x3f800000;
  *piVar3 = param_3;
  piVar3[0xc] = 0;
  piVar3[0xb] = 0;
  piVar3[10] = 0;
  piVar3[9] = 0;
  if (uVar6 == 0) {
    DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
    piVar3[4] = (int)((float)piVar3[4] + (float)(int)((DAT_09afb89c >> 0x10 & 0x7fffU) % 0x1e - 0xf)
                     );
    DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
    piVar3[5] = (int)((float)piVar3[5] + (float)(int)((DAT_09afb89c >> 0x10 & 0x7fffU) % 0x1e - 0xf)
                     );
  }
  *(undefined1 *)(piVar3 + 0xf) = 0;
  *puVar5 = 0xffffff;
  if (uVar6 == 0) {
    if ((local_38 & 1) == 0) {
      *(undefined1 *)(piVar3 + 0xf) = 0;
      iVar1 = (**(code **)(*(int *)(param_2 + 0x544) + 0x144))
                        (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x140));
      if (iVar1 == 0) {
        *(undefined1 *)((int)piVar3 + 0x3d) = 1;
        goto LAB_08859000;
      }
      *puVar5 = 0x3232ff;
    }
    else {
      uVar4 = 1;
      iVar1 = (**(code **)(*(int *)(param_2 + 0x544) + 0x144))
                        (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x140));
      if (iVar1 != 0) {
        uVar4 = 2;
      }
      *(undefined1 *)(piVar3 + 0xf) = uVar4;
      piVar3[8] = DAT_089d4dc4;
    }
  }
  else {
    *(undefined1 *)(piVar3 + 0xf) = 3;
    *puVar5 = 0x7fdf3f;
  }
  *(undefined1 *)((int)piVar3 + 0x3d) = 1;
LAB_08859000:
  *(undefined1 *)((int)piVar3 + 0x3e) = 0;
  piVar3[0x10] = 0;
  *(char *)((int)piVar3 + 0x3f) = (char)local_38;
  fVar7 = *(float *)(param_1 + 0x344);
  piVar3[0xd] = -0x40000000;
  piVar3[8] = (int)((float)piVar3[8] * fVar7);
  return;
}

