/* Entry 0x08871818 | file offset 0x0006E7F0 | FUN_08871818 | bytes 216 */

bool FUN_08871818(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_088713e4();
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 4);
    param_1[0x17] = iVar1;
    param_1[0x18] = param_3;
    param_1[0x19] = param_4;
    param_1[0x1a] = param_6;
    param_1[0x1b] = param_7;
    *(undefined1 *)((int)param_1 + 0x71) = 0;
    iVar3 = *(int *)(param_1[1] + 0x154);
    (**(code **)(iVar3 + 0xec))
              (param_1[1] + (int)*(short *)(iVar3 + 0xe8),*param_1,
               (uVar2 & 0xfffff) * 0x800 + param_5,0,FUN_08871af8,param_1);
  }
  return iVar1 != 0;
}

