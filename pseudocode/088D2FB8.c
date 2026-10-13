/* Entry 0x088D2FB8 | file offset 0x000CFF90 | FUN_088d2fb8 | bytes 140 */

void FUN_088d2fb8(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined1 auStack_50 [64];
  undefined4 local_10;
  
  if ((*param_1 != 0) && (*param_2 != 0)) {
    FUN_088da0a8(*param_2,param_3,auStack_50,&local_10);
    if ((param_4 & 1) != 0) {
      FUN_088d9b84(*param_1,auStack_50);
    }
    if ((param_4 & 2) != 0) {
      FUN_088d9b48(*param_1,local_10);
    }
  }
  return;
}

