/* Entry 0x088358D0 | file offset 0x000328A8 | FUN_088358d0 | bytes 216 */

void FUN_088358d0(undefined4 param_1,float param_2,undefined4 param_3,int param_4,char param_5)

{
  undefined4 uVar1;
  undefined1 auStack_50 [48];
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  if (param_5 != '\0') {
    if (*(int *)(param_4 + 0x398) == 0) {
      uVar1 = *(undefined4 *)(param_4 + 0x38c);
      goto LAB_08835918;
    }
    FUN_0880cd90();
  }
  uVar1 = *(undefined4 *)(param_4 + 0x38c);
LAB_08835918:
  local_1c = param_2 + 3.0;
  *(undefined4 *)(param_4 + 0x38c) = uVar1;
  *(uint *)(param_4 + 0x388) = *(uint *)(param_4 + 0x388) | 0x8000000;
  local_20 = param_1;
  local_18 = param_3;
  uVar1 = FUN_08899300();
  uVar1 = FUN_088976e4(uVar1,auStack_50,&local_20,0x22,1,0,0);
  *(undefined4 *)(param_4 + 0x80) = param_1;
  *(undefined4 *)(param_4 + 0x84) = uVar1;
  *(undefined4 *)(param_4 + 0x88) = param_3;
  *(undefined4 *)(param_4 + 0x8c) = 0x3f800000;
  return;
}

