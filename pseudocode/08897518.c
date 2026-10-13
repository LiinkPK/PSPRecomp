/* Entry 0x08897518 | file offset 0x000944F0 | FUN_08897518 | bytes 108 */

undefined4 FUN_08897518(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0885c6cc(param_1[0x3c],param_3,0x40,0,1,0);
  *param_1 = uVar1;
  FUN_08935524(uVar1,param_2,param_3);
  return *param_1;
}

