/* Entry 0x088CAFAC | file offset 0x000C7F84 | FUN_088cafac | bytes 96 */

undefined4 FUN_088cafac(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_2c [9];
  
  uVar1 = 0;
  if (param_2 != -1) {
    local_2c[0] = param_2;
    uVar1 = FUN_088cadb8(param_1[1],param_1[1] + *(int *)(*param_1 + 8) * 0x24,local_2c,0);
  }
  return uVar1;
}

