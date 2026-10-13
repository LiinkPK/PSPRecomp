/* Entry 0x088D3450 | file offset 0x000D0428 | FUN_088d3450 | bytes 104 */

void FUN_088d3450(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 auStack_50 [64];
  undefined4 local_10;
  
  if ((*param_1 != 0) && (*param_2 != 0)) {
    FUN_088da0a8(*param_2,param_3,auStack_50,&local_10);
    FUN_0887b778(*param_1,auStack_50);
    FUN_0887b820(*param_1,local_10);
  }
  return;
}

