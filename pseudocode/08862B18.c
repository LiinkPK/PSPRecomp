/* Entry 0x08862B18 | file offset 0x0005FAF0 | FUN_08862b18 | bytes 156 */

void FUN_08862b18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_088630c8();
  uVar1 = FUN_08867984(param_1,0);
  iVar2 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar2 + 0x5c))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar2 + 0x58),uVar1,param_2,param_3,
             param_4,param_5,0);
  return;
}

