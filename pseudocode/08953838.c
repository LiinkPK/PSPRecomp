/* Entry 0x08953838 | file offset 0x00150810 | FUN_08953838 | bytes 92 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db7cc. Boundary still requires runtime validation. */

undefined4 FUN_08953838(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_2 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                 *(int *)(*(int *)(param_2 + 0x90) + 4) * 2);
  uVar2 = *(undefined4 *)(iVar1 + 100);
  uVar4 = *(undefined4 *)(iVar1 + 0x68);
  uVar3 = *(undefined4 *)(iVar1 + 0x6c);
  *param_4 = *(undefined4 *)(iVar1 + 0x60);
  param_4[1] = uVar2;
  param_4[2] = uVar4;
  param_4[3] = uVar3;
  return 1;
}

