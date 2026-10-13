/* Entry 0x08925AF8 | file offset 0x00122AD0 | FUN_08925af8 | bytes 308 */

void FUN_08925af8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(param_1 + 4) + 0x28) != '\0') {
    uVar1 = FUN_08893a18(DAT_089d6ac8);
    uVar1 = FUN_08925920(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),param_1,uVar1);
    uVar2 = FUN_08899300();
    uVar2 = FUN_088985f0(uVar2,(int)*(char *)(*(int *)(param_1 + 4) + 0xc));
    FUN_088939ac(DAT_089d6ac8,uVar2,uVar1);
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)(iVar3 + 0x1c) < *(int *)(iVar3 + 0x20)) {
      *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + *(float *)(iVar3 + 0x14);
      *(int *)(*(int *)(param_1 + 4) + 0x1c) = *(int *)(*(int *)(param_1 + 4) + 0x1c) + 1;
    }
    else {
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0xffffffff;
      if (*(float *)(*(int *)(param_1 + 4) + 0x14) < 0.0) {
        uVar1 = FUN_08899300();
        FUN_088983c8(uVar1,(int)*(char *)(*(int *)(param_1 + 4) + 0xc),0);
        iVar3 = *(int *)(param_1 + 4);
      }
      else {
        uVar1 = FUN_08899300();
        FUN_088983c8(uVar1,(int)*(char *)(*(int *)(param_1 + 4) + 0xc),1);
        iVar3 = *(int *)(param_1 + 4);
      }
      *(undefined1 *)(iVar3 + 0x28) = 0;
    }
  }
  return;
}

