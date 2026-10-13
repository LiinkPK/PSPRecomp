/* Entry 0x088BDB2C | file offset 0x000BAB04 | FUN_088bdb2c | bytes 256 */

void FUN_088bdb2c(int param_1,int param_2,int *param_3,short *param_4,int param_5)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  
  iVar2 = 0;
  do {
    if ((*param_4 == param_5) && (**(short **)(param_4 + 2) != 0)) {
      if (param_2 <= *param_3) {
        return;
      }
      FUN_088bffc0(&local_30,param_4);
      puVar1 = (undefined2 *)(param_1 + *param_3 * 0xc);
      *puVar1 = local_30;
      puVar1[1] = local_2e;
      puVar1[2] = local_2c;
      puVar1[3] = local_2a;
      puVar1[4] = local_28;
      puVar1[5] = local_26;
      *param_3 = *param_3 + 1;
    }
    iVar2 = iVar2 + 1;
    param_4 = param_4 + 4;
  } while (iVar2 < 4);
  return;
}

