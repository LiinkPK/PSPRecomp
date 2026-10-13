/* Entry 0x0892A790 | file offset 0x00127768 | FUN_0892a790 | bytes 28 */

undefined4 FUN_0892a790(int param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1 = param_1 + param_2 * 8;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return uVar1;
}

