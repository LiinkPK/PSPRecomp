/* Entry 0x088D00FC | file offset 0x000CD0D4 | FUN_088d00fc | bytes 200 */

undefined4
FUN_088d00fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_6 == 0) {
    uVar2 = FUN_0885c6cc(param_2,param_3,0x40,0,1,1);
  }
  uVar1 = FUN_088d2980(param_1,uVar2,param_3,param_4,param_5,param_6);
  if (param_6 == 0) {
    FUN_0885c538(param_2,uVar2,0x40);
  }
  return uVar1;
}

