/* Entry 0x08972570 | file offset 0x0016F548 | FUN_08972570 | bytes 108 */

undefined4 FUN_08972570(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  uVar1 = FUN_0899350c(param_2,4,&LAB_089c2cd8,0,FUN_089c2d10,0,0);
  param_1[1] = uVar1;
  uVar1 = FUN_089748a4(param_2);
  param_1[2] = uVar1;
  return 1;
}

