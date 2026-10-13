/* Entry 0x08954524 | file offset 0x001514FC | FUN_08954524 | bytes 148 */

void FUN_08954524(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_3[1];
  local_2c = param_3[2];
  local_28 = param_3[3];
  local_24 = param_3[4];
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  local_20 = param_3[5];
  local_1c = param_3[6];
  local_18 = param_3[7];
  local_14 = param_3[8];
  piVar1 = (int *)FUN_08974988();
  (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),uVar2,*param_3,&local_30);
  return;
}

