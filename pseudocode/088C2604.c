/* Entry 0x088C2604 | file offset 0x000BF5DC | FUN_088c2604 | bytes 60 */

undefined4
FUN_088c2604(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_5 + 4);
  FUN_088cc440(uVar1);
  *(undefined4 *)(param_2 + 4) = uVar1;
  return 1;
}

