/* Entry 0x08828AE8 | file offset 0x00025AC0 | FUN_08828ae8 | bytes 104 */

undefined4 FUN_08828ae8(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 local_dc [102];
  
  uVar1 = 0;
  if (param_2 != -1) {
    local_dc[0] = (undefined2)param_2;
    uVar1 = FUN_088289d0(param_1[1],param_1[1] + *(int *)(*param_1 + 8) * 0xcc,local_dc,0);
  }
  return uVar1;
}

