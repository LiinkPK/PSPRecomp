/* Entry 0x0895F578 | file offset 0x0015C550 | FUN_0895f578 | bytes 144 */

undefined4 * FUN_0895f578(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &DAT_089dc020;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  param_1[2] = uVar1;
  param_1[1] = uVar1;
  param_1[3] = *(undefined4 *)(param_2 + 0x2c);
  param_1[4] = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}

