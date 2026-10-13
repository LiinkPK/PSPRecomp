/* Entry 0x088714F4 | file offset 0x0006E4CC | FUN_088714f4 | bytes 200 */

undefined4 FUN_088714f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_088713e4();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(param_1[1] + 0x154);
    (**(code **)(iVar3 + 0xe4))
              (param_1[1] + (int)*(short *)(iVar3 + 0xe0),*param_1,
               (*(uint *)(iVar1 + 4) & 0xfffff) << 0xb,0);
    iVar3 = *(int *)(param_1[1] + 0x154);
    uVar2 = (**(code **)(iVar3 + 0x24))
                      (param_1[1] + (int)*(short *)(iVar3 + 0x20),*param_1,param_3,
                       *(uint *)(iVar1 + 8) & 0xfffffff,0);
  }
  return uVar2;
}

