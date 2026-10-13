/* Entry 0x0887263C | file offset 0x0006F614 | FUN_0887263c | bytes 116 */

undefined8
FUN_0887263c(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  while ((uVar1 != 0 || (uVar2 != 0))) {
    if (((param_3 & uVar1) == uVar1) && ((param_4 & uVar2) == uVar2)) {
      uVar4 = uVar4 | param_5[3];
      uVar3 = uVar3 | param_5[2];
    }
    uVar1 = param_5[4];
    uVar2 = param_5[5];
    param_5 = param_5 + 4;
  }
  return CONCAT44(uVar4,uVar3);
}

