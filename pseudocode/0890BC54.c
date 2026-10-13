/* Entry 0x0890BC54 | file offset 0x00108C2C | FUN_0890bc54 | bytes 56 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089cde74. Boundary still requires runtime validation. */

undefined4 FUN_0890bc54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 300) = param_3;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x130) = param_4;
  *(undefined1 *)(param_1 + 0x134) = 0;
  return 1;
}

